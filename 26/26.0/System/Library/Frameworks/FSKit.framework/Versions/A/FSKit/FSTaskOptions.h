@class NSMutableDictionary, NSMutableArray;

@interface FSTaskOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *extras;
@property (copy) NSMutableArray *taskOptions;

- (id)initWithOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setURL:(id)a0 forKey:(id)a1;
- (id)initWithOptions:(id)a0 extras:(id)a1;
- (void)setSecureURL:(id)a0 forKey:(id)a1;
- (id)urlForOption:(id)a0;

@end
