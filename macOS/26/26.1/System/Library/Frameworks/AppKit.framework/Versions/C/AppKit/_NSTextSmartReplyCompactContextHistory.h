@class NSString, NSDate;

@interface _NSTextSmartReplyCompactContextHistory : NSObject

@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSDate *mostRecentEntryDate;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContextHistory:(id)a0;

@end
