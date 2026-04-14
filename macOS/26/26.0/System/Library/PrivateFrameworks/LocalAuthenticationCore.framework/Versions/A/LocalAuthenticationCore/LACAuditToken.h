@class NSData;

@interface LACAuditToken : NSObject

@property (readonly, nonatomic) struct { unsigned int val[8]; } rawValue;
@property (readonly, nonatomic) NSData *data;

+ (id)nullInstance;

- (id)initWithData:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawValue:(struct { unsigned int x0[8]; })a0;

@end
