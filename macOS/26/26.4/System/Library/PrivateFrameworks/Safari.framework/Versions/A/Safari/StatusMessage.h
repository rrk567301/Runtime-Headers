@class NSURL, NSString;

@interface StatusMessage : NSObject

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *string;

+ (BOOL)isEmpty:(id)a0;
+ (id)emptyMessage;

- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 string:(id)a1;

@end
