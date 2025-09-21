@class NSString, NSDate;

@interface CNContactPosterDataItem : NSObject

@property (copy) NSString *contactIdentifier;
@property unsigned long long itemDetails;
@property (nonatomic) BOOL ignoredForRevert;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) CNContactPosterDataItem *refLoopResistantStrongPairedItem;
@property BOOL avoidCircularEncoding;

+ (id)os_log;

- (void)acceptVisitor:(id)a0;
- (void).cxx_destruct;
- (void)_updateStrongForImpendingPairedItem:(id)a0;

@end
