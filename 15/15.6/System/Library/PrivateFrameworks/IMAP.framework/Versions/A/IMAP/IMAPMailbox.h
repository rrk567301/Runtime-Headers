@class NSString, NSArray;
@protocol IMAPMailboxDelegate, MCMailbox;

@interface IMAPMailbox : NSObject {
    id<IMAPMailboxDelegate> _delegate;
    unsigned int _uidValidity;
    unsigned long long _exists;
    unsigned int _permanentFlags;
    char _hasNewResponses;
    unsigned long long _allegedHighestModificationSequence;
    unsigned long long _computedHighestModificationSequence;
    char _allegedHighestModificationSequenceHasBeenInitialized;
    char _computedHighestModificationSequenceHasBeenInitialized;
}

@property (retain) id<MCMailbox> mailbox;
@property (nonatomic) unsigned int permanentFlags;
@property (copy) NSString *referenceName;
@property char readOnly;
@property char uidNotSticky;
@property (retain) NSArray *quotaRoots;
@property unsigned long long exists;
@property struct { long long count; unsigned long long size; } quotaUsage;
@property unsigned int uidNext;
@property unsigned int uidValidity;
@property unsigned int unseenCount;
@property unsigned long long computedHighestModificationSequence;
@property unsigned long long allegedHighestModificationSequence;
@property char supportsModificationSequences;

+ (char)automaticallyNotifiesObserversOfAllegedHighestModificationSequence;
+ (char)automaticallyNotifiesObserversOfExists;
+ (char)automaticallyNotifiesObserversOfQuotaUsage;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)initWithMailboxName:(id)a0;
- (void)clearDelegate:(id)a0;
- (void)setTotalSize:(unsigned long long)a0 forQuotaMessageCount:(long long)a1;
- (void)setExists:(unsigned long long)a0 fromIDLE:(char)a1;
- (void)updateWithStatusEntries:(id)a0;

@end
