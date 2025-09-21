@class NSTimeZone, NSString, NSArray, NSData, NSDate, NSURL;

@interface SGExternalEventExtraction : NSObject <SGExternalExtraction, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *fallbackIdentifier;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSTimeZone *startTimeZone;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSTimeZone *endTimeZone;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSData *icsAttachmentData;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 fallbackIdentifier:(id)a1 status:(long long)a2 category:(long long)a3 title:(id)a4 content:(id)a5 creationDate:(id)a6 startTime:(id)a7 startTimeZone:(id)a8 endTime:(id)a9 endTimeZone:(id)a10 isAllDay:(BOOL)a11 locations:(id)a12 icsAttachmentData:(id)a13 url:(id)a14;

@end
