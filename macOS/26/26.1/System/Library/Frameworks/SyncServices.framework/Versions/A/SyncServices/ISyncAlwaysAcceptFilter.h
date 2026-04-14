@class NSArray;

@interface ISyncAlwaysAcceptFilter : NSObject <ISyncFiltering> {
    NSArray *_entityNames;
}

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntityNames:(id)a0;
- (BOOL)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (id)supportedEntityNames;

@end
