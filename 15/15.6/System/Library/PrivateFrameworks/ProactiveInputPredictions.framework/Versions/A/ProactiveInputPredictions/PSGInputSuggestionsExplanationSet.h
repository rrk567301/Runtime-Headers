@class _PASLock;

@interface PSGInputSuggestionsExplanationSet : NSObject <NSSecureCoding, NSCopying> {
    _PASLock *_lock;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)_stringFromExplanation:(unsigned char)a0;
+ (id)stringFromExplanationCode:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSet:(id)a0;
- (void)enumerateExplanationCodeWithBlock:(id /* block */)a0;
- (void)_pushExplanationCode:(unsigned short)a0 namespaceId:(unsigned short)a1;
- (char)hasContactsServingError;
- (char)hasPETLoggingData;
- (char)hasTriggeringXPCTimeout;
- (char)isEqualToExplanationSet:(id)a0;
- (void)pushInternalExplanationCode:(unsigned int)a0;
- (void)pushPortraitExplanationCode:(unsigned char)a0;

@end
