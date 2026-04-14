@class NSString, NSDate;

@interface IMMessagePartSyndicationRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serializedString;
@property (readonly, nonatomic) unsigned long long serializedVersion;
@property (readonly, nonatomic) long long syndicationType;
@property (nonatomic) long long syndicationStatus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messagePartRange;
@property (readonly, nonatomic) NSDate *syndicationStartDate;

+ (id)unarchiveClasses;
+ (id)_stringFromSyndicationType:(long long)a0;
+ (id)_stringFromSyndicationStatus:(long long)a0;
+ (id)serializedStringFromArray:(id)a0;
+ (id)messageRangeFromTokens_v1:(id)a0;
+ (id)deserializeSyndicationRangeFromString:(id)a0;
+ (unsigned long long)serializationVersion;
+ (void)setSerializationVersion:(unsigned long long)a0;
+ (id)rangesFromSerializedString:(id)a0;
+ (id)updateMessagesRanges:(id)a0 withMessagePartSyndicationRanges:(id)a1 didUpdate:(BOOL *)a2;
+ (id)messagePartSyndicationRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inRangesArray:(id)a1;
+ (id)findChangesFromRangeArray:(id)a0 comparedToRangeArray:(id)a1;
+ (id)minStartDateForRanges:(id)a0;
+ (id)maxStartDateForRanges:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSyndicationType:(long long)a0 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 syndicationStartDate:(id)a2;
- (id)initWithSyndicationType:(long long)a0 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 syndicationStartDate:(id)a2 syndicationStatus:(long long)a3;
- (id)initWithSyndicationAction:(id)a0;
- (BOOL)_canBeReplacedByRange:(id)a0;

@end
