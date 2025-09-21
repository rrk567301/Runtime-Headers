@class NSDictionary, NSError, SBObject;

@interface SBProxy : NSProxy {
    SBObject *_createdObject;
    NSDictionary *_properties;
    id _data;
    NSError *_lastError;
}

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (id)initWithData:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)lastError;
- (void)setLastError:(id)a0;
- (char)exists;
- (void)addToElementArray:(id)a0 atLocation:(id)a1;
- (unsigned int)codeInContext:(id)a0;
- (id)initWithData:(id)a0 andProperties:(id)a1;

@end
