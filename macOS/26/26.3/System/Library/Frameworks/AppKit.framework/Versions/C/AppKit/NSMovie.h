@class NSData, NSURL;

@interface NSMovie : NSObject <NSCoding> {
    NSData *_data;
    NSURL *_URL;
}

- (id)init;
- (id)data;
- (id)URL;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)QTMovie;
- (id)initWithMovie:(id)a0;

@end
