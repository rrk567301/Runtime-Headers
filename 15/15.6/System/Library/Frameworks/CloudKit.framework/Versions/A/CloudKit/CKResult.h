@class NSError;

@interface CKResult : NSObject

@property (readonly, nonatomic) id successValue;
@property (readonly, nonatomic) NSError *error;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuccess:(id)a0;
- (id)initWithFailure:(id)a0;

@end
