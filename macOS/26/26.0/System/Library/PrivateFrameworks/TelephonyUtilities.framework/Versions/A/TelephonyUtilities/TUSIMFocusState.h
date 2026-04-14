@class NSString;

@interface TUSIMFocusState : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ identifier;
    void /* function */ name;
    void /* function */ phNumber;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *phNumber;
@property (nonatomic, readonly) BOOL focusAllowCalls;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 phNumber:(id)a2 focusAllowCalls:(BOOL)a3;

@end
