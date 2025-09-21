@class NSDate;

@interface PKCacheScoreItem : NSObject <NSSecureCoding> {
    NSDate *_insertDate;
}

@property (class, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasExpired;
- (char)isNewerThan:(id)a0;

@end
