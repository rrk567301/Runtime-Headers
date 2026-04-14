@class NSDate;

@interface DIExecutionFeedback : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _consumed;
    NSDate *_finishDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *finishDate;
@property (nonatomic) BOOL consumed;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
