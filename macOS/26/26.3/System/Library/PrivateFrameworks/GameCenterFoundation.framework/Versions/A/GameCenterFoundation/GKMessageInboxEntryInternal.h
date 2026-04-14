@class NSURL, NSString, NSDate;

@interface GKMessageInboxEntryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *senderAlias;
@property (retain, nonatomic) NSString *senderHandle;
@property (retain, nonatomic) NSString *contactID;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *friendCode;
@property (readonly, nonatomic) NSString *senderDisplayName;
@property (retain, nonatomic) NSDate *timestamp;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
