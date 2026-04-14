@class NSString, NSDate;

@interface _PSHyperRecentActivity : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long activityType;
@property (retain, nonatomic) NSString *conversationId;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 activityType:(long long)a1 conversationId:(id)a2;

@end
