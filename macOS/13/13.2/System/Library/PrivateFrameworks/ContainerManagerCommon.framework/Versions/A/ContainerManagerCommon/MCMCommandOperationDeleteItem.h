@protocol MCMMetadata;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMMetadata> metadata;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;

@end
