@class NSArray;

@interface ISyncSimplyIgnoreLocalsFilter : NSObject <ISyncFiltering> {
    NSArray *_entityNames;
}

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithEntityNames:(id)a0;
- (BOOL)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (id)supportedEntityNames;

@end
