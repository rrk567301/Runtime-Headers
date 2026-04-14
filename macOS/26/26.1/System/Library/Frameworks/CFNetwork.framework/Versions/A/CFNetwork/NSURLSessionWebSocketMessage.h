@class NSData, NSString, NSObject;

@interface NSURLSessionWebSocketMessage : NSObject {
    NSObject *content;
}

@property (readonly) long long type;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *string;

- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
