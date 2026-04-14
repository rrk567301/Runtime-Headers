@class NSDictionary, NSError, SBObject;

@interface SBProxy : NSProxy {
    SBObject *_createdObject;
    NSDictionary *_properties;
    id _data;
    NSError *_lastError;
}

- (void)setLastError:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)exists;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)lastError;
- (id)description;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)addToElementArray:(id)a0 atLocation:(id)a1;
- (unsigned int)codeInContext:(id)a0;
- (id)initWithData:(id)a0 andProperties:(id)a1;

@end
