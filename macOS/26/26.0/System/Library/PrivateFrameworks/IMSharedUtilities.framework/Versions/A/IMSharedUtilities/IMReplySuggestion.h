@class NSString, NSDictionary, MSMessage;

@interface IMReplySuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) MSMessage *providedMessage;
@property (nonatomic) BOOL isSending;
@property (copy, nonatomic) NSString *attribution;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 text:(id)a1 version:(long long)a2;
- (void)trackSentAtIndex:(unsigned long long)a0 isNotification:(BOOL)a1;

@end
