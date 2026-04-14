@class NSData, NSString, NSObject;

@interface NSURLSessionWebSocketMessage : NSObject {
    NSObject *content;
}

@property (readonly) long long type;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *string;

- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
