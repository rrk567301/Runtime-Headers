@class NSString, NSDictionary, NSDate;

@interface WBSSavedAccountUnknownHistoryItem : NSObject <WBSSavedAccountSidecarHistoryItem>

@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
