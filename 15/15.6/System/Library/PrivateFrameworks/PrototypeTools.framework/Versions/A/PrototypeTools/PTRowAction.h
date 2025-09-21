@interface PTRowAction : NSObject <NSSecureCoding> {
    id /* block */ _handler;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isEncodable;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)actionWithHandler:(id /* block */)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)defaultHandler;
- (char)deselectsRowOnSuccess;

@end
