@class NSString;

@interface ECMessageFlagChange : NSObject <ECMessageFlagChangeBuilder, EFPubliclyDescribable, NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic, getter=setRead) ECMessageFlagChange *read;
@property (class, readonly, copy, nonatomic, getter=setDeleted) ECMessageFlagChange *deleted;
@property (class, readonly, copy, nonatomic, getter=clearRead) ECMessageFlagChange *unread;
@property (class, readonly, copy, nonatomic, getter=setFlagged) ECMessageFlagChange *flagged;
@property (class, readonly, copy, nonatomic, getter=clearFlagged) ECMessageFlagChange *unflagged;
@property (class, readonly, copy, nonatomic, getter=setReplied) ECMessageFlagChange *replied;
@property (class, readonly, copy, nonatomic, getter=setForwarded) ECMessageFlagChange *forwarded;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char read;
@property (nonatomic) char deleted;
@property (nonatomic) char replied;
@property (nonatomic) char flagged;
@property (nonatomic) char draft;
@property (nonatomic) char forwarded;
@property (nonatomic) char redirected;
@property (nonatomic) char junkLevelSetByUser;
@property (nonatomic) unsigned long long junkLevel;
@property (nonatomic) unsigned long long flagColor;
@property (nonatomic) long long reason;
@property (nonatomic) char readChanged;
@property (nonatomic) char deletedChanged;
@property (nonatomic) char repliedChanged;
@property (nonatomic) char flaggedChanged;
@property (nonatomic) char draftChanged;
@property (nonatomic) char forwardedChanged;
@property (nonatomic) char redirectedChanged;
@property (nonatomic) char junkLevelSetByUserChanged;
@property (nonatomic) char junkLevelChanged;
@property (nonatomic) char flagColorChanged;
@property (readonly, nonatomic) char hasChanges;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeFrom:(id)a0 to:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (void)changesDraftTo:(char)a0;
- (void)changesDeletedTo:(char)a0;
- (void)changesFlagColorTo:(unsigned long long)a0;
- (void)changesFlaggedTo:(char)a0;
- (void)changesForwardedTo:(char)a0;
- (void)changesJunkLevelSetByUserTo:(char)a0;
- (void)changesJunkLevelTo:(unsigned long long)a0;
- (void)changesReadTo:(char)a0;
- (void)changesRedirectedTo:(char)a0;
- (void)changesRepliedTo:(char)a0;
- (id)flagsAfterChangingFlags:(id)a0 flagsWereChanged:(char *)a1;

@end
