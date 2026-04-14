@class NSDate, NSDictionary, NSData, NSError, HMDCharacteristicRequest, NSNumber;

@interface HMDCharacteristicResponse : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMDCharacteristicRequest *request;
@property (retain, nonatomic) id value;
@property (getter=isRemote) BOOL remote;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *stateNumber;
@property (readonly, nonatomic) NSDate *valueUpdatedTime;
@property (readonly, nonatomic) NSData *notificationContext;
@property (readonly, copy, nonatomic) NSDictionary *characteristicUpdateDictionary;

+ (id)characteristicsUpdateDictionaryFromResponses:(id)a0;
+ (id)responseWithRequest:(id)a0 characteristicUpdateDictionary:(id)a1;
+ (id)responseWithRequest:(id)a0 error:(id)a1;
+ (id)responsesWithRequests:(id)a0 characteristicUpdateDictionary:(id)a1;
+ (id)responsesWithRequests:(id)a0 error:(id)a1;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (void)setValue:(id)a0 updatedTime:(id)a1 stateNumber:(id)a2 notificationContext:(id)a3;

@end
