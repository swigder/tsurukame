// Copyright 2018 David Sansome
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <CoreText/CoreText.h>
#import <Foundation/Foundation.h>

@class TKMFont;

@interface TKMFontLoader : NSObject

@property(nonatomic, readonly) NSArray<TKMFont *> *allFonts;

- (instancetype)init;

@end


@interface TKMFont : NSObject

@property(nonatomic, readonly) NSString *fontName;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) int64_t sizeBytes;
@property(nonatomic, readonly) BOOL available;
@property(nonatomic, readonly) BOOL enabled;

- (instancetype)init NS_UNAVAILABLE;
- (void)reload;

@end
