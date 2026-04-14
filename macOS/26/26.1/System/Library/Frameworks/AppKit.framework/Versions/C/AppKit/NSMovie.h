@class NSData, NSURL;

@interface NSMovie : NSObject <NSCoding> {
    NSData *_data;
    NSURL *_URL;
}

- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)URL;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)QTMovie;
- (id)initWithMovie:(id)a0;

@end
