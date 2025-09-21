@class QTCompressionOptionsInternal;

@interface QTCompressionOptions : NSObject {
    QTCompressionOptionsInternal *_internal;
    long long _reserved;
}

+ (char)_canUseCompressionOptionsWithDescription:(id)a0 forVisibility:(unsigned long long)a1;
+ (id)_compressionOptionsPropertyList;
+ (id)compressionOptionsIdentifiersForMediaType:(id)a0;
+ (id)compressionOptionsWithDescription:(id)a0;
+ (id)compressionOptionsWithIdentifier:(id)a0;

- (id)init;
- (id)localizedDisplayName;
- (id)mediaType;
- (char)isEqualToCompressionOptions:(id)a0;
- (id)localizedCompressionOptionsSummary;

@end
