@class NSString, NSNumber, NSDictionary;

@interface AVAudioPropertyNotification : NSObject

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) NSNumber *sourceSessionID;
@property (readonly, nonatomic) NSNumber *nodeSessionID;
@property (readonly, nonatomic) NSDictionary *propertyData;

- (void).cxx_destruct;
- (id)initWithInternal:(id)a0;

@end
