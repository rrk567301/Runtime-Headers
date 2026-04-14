@interface XPCInterface : NSObject

+ (id)CTCSGetExpectedClassesForOptionsOverXPCInterface;
+ (id)CTCSExpectedXPCInterfaceClassesForAllActiveDataSetRecords;
+ (void)CTCSSetExpectedClassesForXPCBrokerInterface:(id)a0;
+ (id)CTCSCreateXPCTransportInterface;

@end
