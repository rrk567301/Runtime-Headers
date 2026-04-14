@class NSData, NSString, NSObject;

@interface NSURLSessionWebSocketMessage : NSObject {
    NSObject *content;
}

@property (readonly) long long type;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *string;

- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
