@class NSString;

@interface CalCalendarLocalAccountInfo : NSObject <CDBAccountInfo>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (char)addressIsAccountOwner:(id)a0;
- (char)addressURLIsAccountOwner:(id)a0;

@end
