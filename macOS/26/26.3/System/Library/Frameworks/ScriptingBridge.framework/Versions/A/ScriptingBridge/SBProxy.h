@class NSDictionary, NSError, SBObject;

@interface SBProxy : NSProxy {
    SBObject *_createdObject;
    NSDictionary *_properties;
    id _data;
    NSError *_lastError;
}

- (id)initWithProperties:(id)a0;
- (void)setLastError:(id)a0;
- (id)debugDescription;
- (id)lastError;
- (BOOL)exists;
- (id)initWithData:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)addToElementArray:(id)a0 atLocation:(id)a1;
- (unsigned int)codeInContext:(id)a0;
- (id)initWithData:(id)a0 andProperties:(id)a1;

@end
