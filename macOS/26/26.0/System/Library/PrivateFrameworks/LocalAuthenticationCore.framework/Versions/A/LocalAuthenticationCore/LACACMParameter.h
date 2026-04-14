@class NSData, NSString;

@interface LACACMParameter : NSObject {
    NSString *_description;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSData *data;

+ (id)acmParameterDoNotStartDTOTimers;
+ (id)acmParameterSecureIntentSupport;
+ (id)acmParameterWithMaxContinuityAge:(unsigned int)a0;
+ (id)acmParameterWithTimeOffset:(unsigned int)a0;
+ (id)acmParameterWithUserId:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithACMParamType:(unsigned int)a0 bytes:(void *)a1 length:(unsigned long long)a2 description:(id)a3;

@end
