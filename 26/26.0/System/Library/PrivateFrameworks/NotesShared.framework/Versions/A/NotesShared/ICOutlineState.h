@class NSArray, NSSet, NSData, ICTTMergeableWallClockValue;

@interface ICOutlineState : NSObject

@property (readonly, copy, nonatomic) NSArray *collapsedUUIDStrings;
@property (retain, nonatomic) ICTTMergeableWallClockValue *mergeableValue;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSSet *collapsedUUIDs;

- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)mergeWithState:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollapsedUUIDs:(id)a0;
- (BOOL)isEqualToICOutlineState:(id)a0;
- (void)updateCollapsedUUIDs;

@end
