@class NSString, NSDate;

@interface SCUIReportMessage : NSObject

@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *senderDisplayName;
@property (readonly, copy) NSString *body;
@property (readonly) long long sensitiveImageCount;
@property (readonly) long long sensitiveVideoCount;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 senderDisplayName:(id)a1 body:(id)a2 sensitiveImageCount:(long long)a3 sensitiveVideoCount:(long long)a4;

@end
