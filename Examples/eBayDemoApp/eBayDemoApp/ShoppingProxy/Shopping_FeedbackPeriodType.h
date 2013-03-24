// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains the data for one type of feedback for one predefined time
 period. Parent FeedbackPeriodArrayType object indicates the type of
 feedback counted: positive, neutral, negative, or total. 
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_FeedbackPeriodType : NSObject <PicoBindable> {

@private
    NSNumber *_periodInDays;
    NSNumber *_count;
    NSMutableArray *_any;

}


/**
 
 Indicates the time period for the feedback count. Returns a value indicating
 the number of days prior to the call for which feedbacks of the particular
 type are counted.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *periodInDays;

/**
 
 Count of the feedbacks received by the user for the time period prior to the
 call indicated in PeriodInDays.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *count;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end