@class NSArray, NSString;

@interface IMUnreadCountReportDelta : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *deletedGUIDs;
@property (readonly, nonatomic) NSArray *updatedReports;
@property (readonly, nonatomic, getter=isReplacement) BOOL replacement;
@property (readonly, nonatomic) NSString *fromStamp;
@property (readonly, nonatomic) NSString *toStamp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeletedGUIDs:(id)a0 updatedReports:(id)a1 isReplacement:(BOOL)a2 fromStamp:(id)a3 toStamp:(id)a4;

@end
