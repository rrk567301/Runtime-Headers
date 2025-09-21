@class NSUUID, NSString;

@interface TTParagraphStyle : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, TTModelAttributeComparable>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned int style;
@property (nonatomic) long long alignment;
@property (nonatomic) long long writingDirection;
@property (nonatomic) unsigned long long indent;
@property (nonatomic) unsigned long long startingItemNumber;
@property (nonatomic) unsigned int hints;
@property (nonatomic) char needsParagraphCleanup;
@property (nonatomic) char needsListCleanup;
@property (readonly, nonatomic) char canIndent;
@property (readonly, nonatomic) char isList;
@property (readonly, nonatomic) char isHeader;
@property (readonly, nonatomic) char uniqueToLine;
@property (readonly, nonatomic) char preferSingleLine;
@property (readonly, nonatomic) char wantsFollowingNewLine;
@property (readonly, nonatomic) NSUUID *trackingUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultParagraphStyle;
+ (int)paragraphStyleAlignmentForTextAlignment:(long long)a0;
+ (id)paragraphStyleNamed:(unsigned int)a0;
+ (long long)textAlignmentForParagraphStyleAlignment:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)serialize;
- (id)initWithArchive:(const void *)a0;
- (char)isEqualToModelComparable:(id)a0;
- (char)isEqualToModelParagraphStyle:(id)a0;
- (char)isEqualToParagraphStyle:(id)a0;
- (char)isUnknownStyle;
- (id)listBulletInAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (void)saveToArchive:(void *)a0;

@end
