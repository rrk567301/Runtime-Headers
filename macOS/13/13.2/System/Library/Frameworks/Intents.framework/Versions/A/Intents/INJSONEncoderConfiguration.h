@class NSString;

@interface INJSONEncoderConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL locationIncludesTimestamp;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
