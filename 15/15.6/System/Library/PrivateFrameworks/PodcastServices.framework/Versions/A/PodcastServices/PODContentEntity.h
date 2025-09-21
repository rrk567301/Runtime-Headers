@class NSString;

@interface PODContentEntity : NSObject <PODContentEntityProtocol, PODSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long syncID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
