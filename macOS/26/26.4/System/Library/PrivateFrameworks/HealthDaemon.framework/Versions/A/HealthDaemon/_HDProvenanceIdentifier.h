@class NSNumber;

@interface _HDProvenanceIdentifier : NSObject

@property (readonly, copy, nonatomic) NSNumber *sourceID;
@property (readonly, copy, nonatomic) NSNumber *deviceID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceID:(id)a0 deviceID:(id)a1;

@end
