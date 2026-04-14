@class NSString, NSNumber, NSDictionary;

@interface AVAudioPropertyNotificationInternal : NSObject

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) NSNumber *sourceSessionID;
@property (readonly, nonatomic) NSNumber *nodeSessionID;
@property (readonly, nonatomic) NSDictionary *propertyData;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPropertyName:(id)a0 sourceSessionID:(id)a1 nodeSessionID:(id)a2 propertyData:(id)a3;

@end
