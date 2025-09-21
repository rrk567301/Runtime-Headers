@class NSUUID;

@interface HMDActionSetResponse : HMFObject {
    void /* unknown type, empty encoding */ internalActionSetUUID;
}

@property (nonatomic, readonly) NSUUID *actionSetUUID;
@property (nonatomic, readonly) BOOL state;

+ (id)responsesFromSerializedResponses:(id)a0;
+ (id)serializeWithResponses:(id)a0;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithActionSetUUID:(id)a0 state:(BOOL)a1;

@end
