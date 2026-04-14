@protocol MCMMetadata;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMMetadata> metadata;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;

@end
