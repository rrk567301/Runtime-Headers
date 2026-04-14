@interface PTRowAction : NSObject <NSSecureCoding> {
    id /* block */ _handler;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEncodable;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)actionWithHandler:(id /* block */)a0;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id /* block */)defaultHandler;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)deselectsRowOnSuccess;

@end
