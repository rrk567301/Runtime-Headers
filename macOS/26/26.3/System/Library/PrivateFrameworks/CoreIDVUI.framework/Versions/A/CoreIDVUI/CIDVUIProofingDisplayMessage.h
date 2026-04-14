@class NSString, NSArray;

@interface CIDVUIProofingDisplayMessage : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ title;
    void /* function */ message;
    void /* function */ actions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSArray *actions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 actions:(id)a2;

@end
