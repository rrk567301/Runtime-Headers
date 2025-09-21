@class NSString, NSDate;

@interface PREResponsesExperimentMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *senderIdentifier;
@property (copy, nonatomic) NSString *summaryString;
@property (nonatomic, getter=isTapBack) char tapBack;
@property (nonatomic, getter=isEmote) char emote;
@property (nonatomic, getter=isRead) char read;
@property (retain, nonatomic) NSDate *dateSent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
