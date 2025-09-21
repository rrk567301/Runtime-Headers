@class NSString;

@interface _DDUIRapportDevice : NSObject <DDUIDevice>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned int deviceType;
@property (nonatomic) char isMine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
