@class NSData, NSURL;

@interface NSMovie : NSObject <NSCoding> {
    NSData *_data;
    NSURL *_URL;
}

- (id)initWithCoder:(id)a0;
- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)data;
- (void)dealloc;
- (id)QTMovie;
- (id)initWithMovie:(id)a0;

@end
