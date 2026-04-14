@class NSString, NSURL, NSDate;

@interface CalAlarm : NSObject <NSCopying> {
    id _objectID;
    void *_reserved;
}

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *sound;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) double relativeTrigger;
@property (copy, nonatomic) NSDate *absoluteTrigger;

+ (id)alarm;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)_createReservedDictionaryIfNeeded;
- (id)acknowledged;
- (void)setAcknowledged:(id)a0;
- (void)setRelatedTo:(id)a0;
- (id)relatedTo;
- (id)triggerDateRelativeTo:(id)a0;

@end
