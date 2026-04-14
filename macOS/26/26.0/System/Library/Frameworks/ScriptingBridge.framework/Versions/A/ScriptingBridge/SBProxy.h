@class NSDictionary, NSError, SBObject;

@interface SBProxy : NSProxy {
    SBObject *_createdObject;
    NSDictionary *_properties;
    id _data;
    NSError *_lastError;
}

- (void)setLastError:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (BOOL)exists;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)description;
- (id)lastError;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)addToElementArray:(id)a0 atLocation:(id)a1;
- (unsigned int)codeInContext:(id)a0;
- (id)initWithData:(id)a0 andProperties:(id)a1;

@end
