@class NSUUID, NSString;

@interface AKSimpleProfileContext : NSObject <NSSecureCoding, AKAuthenticatedServerRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *_identifier;
@property (copy, nonatomic) NSString *altDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodingClasses;

@end
