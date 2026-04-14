@class NSString, NSSet, NSURL, NSDate;

@interface FKFoundInMailItemRowViewModel : NSObject <NSCopying> {
    NSString *_rowTitleText;
    NSString *_rowSubjectText;
    NSString *_rowSubtitleText;
}

@property (readonly, copy, nonatomic) NSString *messageID;
@property (readonly, copy, nonatomic) NSString *fromEmailAddress;
@property (readonly, copy, nonatomic) NSDate *dateSent;
@property (readonly, copy, nonatomic) NSString *fromDisplayName;
@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, copy, nonatomic) NSURL *deeplinkURL;
@property (readonly, copy, nonatomic) NSSet *orderDetails;
@property (readonly, copy, nonatomic) NSString *rowTitleText;
@property (readonly, copy, nonatomic) NSString *rowSubjectText;
@property (readonly, copy, nonatomic) NSString *rowSubtitleText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0 fromEmailAddress:(id)a1 dateSent:(id)a2 fromDisplayName:(id)a3 subject:(id)a4 deeplinkURL:(id)a5 orderDetails:(id)a6;

@end
