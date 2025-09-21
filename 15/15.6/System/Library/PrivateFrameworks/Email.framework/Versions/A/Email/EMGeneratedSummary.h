@class NSString, NSAttributedString;
@protocol EMCollectionItemID;

@interface EMGeneratedSummary : NSObject <NSSecureCoding, NSCopying, EFPubliclyDescribable>

@property (class, readonly, nonatomic) long long consideredUrgentHourLimit;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSAttributedString *topLine;
@property (readonly, nonatomic) NSAttributedString *synopsis;
@property (readonly, nonatomic) char urgent;
@property (readonly, copy, nonatomic) id<EMCollectionItemID> messageItemID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTopLine:(id)a0 synopsis:(id)a1 urgent:(char)a2;
- (id)initWithTopLine:(id)a0 synopsis:(id)a1 urgent:(char)a2 messageItemID:(id)a3;
- (char)isUrgentForDate:(id)a0;

@end
