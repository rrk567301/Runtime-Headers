@class NSString, NSDate;

@interface PREResponsesExperimentMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *senderIdentifier;
@property (copy, nonatomic) NSString *summaryString;
@property (nonatomic, getter=isTapBack) BOOL tapBack;
@property (nonatomic, getter=isEmote) BOOL emote;
@property (nonatomic, getter=isRead) BOOL read;
@property (retain, nonatomic) NSDate *dateSent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;

@end
